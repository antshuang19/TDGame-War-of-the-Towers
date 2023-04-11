#include "map_import.h"
#include "ui_map_import.h"
extern std::string image_result,road_result;
Map_import::Map_import(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Map_import)
{
    ui->setupUi(this);
    QPixmap pix("img/1.jpg");
    ui->wallpaper->setPixmap(pix.scaled(600,600));
    intilize_combox();
}

Map_import::~Map_import()
{
    delete ui;
}

void Map_import::intilize_combox()
{
    char name[100],path[100],road[100];
    FILE *source = fopen("img/image_txt.txt", "r");
    if(source == NULL)
    {
        cout<<"file connot open"<<endl;
        exit(-1);
    }
    while(fscanf(source, "%[^,],%[^,],%s\n",name,path,road) != EOF)
    {
        this->mapping[name] = make_pair(path, road);
        ui->combobox->addItem(name);
    }
    fclose(source);
}

void Map_import::on_import_2_clicked()
{
    QString name = ui->name->text();
    QString path = ui->image->text();
    QString road = ui->enemy_road->text();
    char name_new[100],path_new[100],road_new[100];
    char name1[100],path1[100],road1[100];
    strcpy(name_new,name.toStdString().c_str());
    strcpy(path_new,path.toStdString().c_str());
    strcpy(road_new,road.toStdString().c_str());

    cout<<path_new<<" testing "<<road_new<<endl;
    FILE *path_path = fopen(path_new, "r");
    FILE *path_road = fopen(road_new, "r");
    if(path_path == NULL or path_road == NULL)
    {
        cout << "error bro"<< endl;
        QMessageBox::about(this,"错误","文件无法打开或出现错误");
        return;
    }
    FILE *source = fopen("img/image_txt.txt", "r+");
    while(fscanf(source, "%[^,],%[^,],%s\n",name1,path1,road1) != EOF){}
    fprintf(source, "%s,%s,%s\n",name_new,path_new,road_new);
    fclose(source);
    ui->combobox->addItem(name_new);
    this->close();
}


void Map_import::on_ok_clicked()
{
    QString result = ui->combobox->currentText();
    image_result = this->mapping[result.toStdString()].first;
    road_result =  this->mapping[result.toStdString()].second;
    cout<<image_result<<" bro "<<road_result<<endl;
    this->close();
}

