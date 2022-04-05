/*
    Author : Anik Saha
    Project Name : Unit-Conversion
    Date created : 20/03/2022
*/
#include<iostream>
#include <windows.h>
using namespace std;
class input
{
public:
    float j;
};
class length:public input
{

public:
    void mm_m();
    void m_mm();
    void cm_m();
    void m_cm();
    void km_cm();
    void cm_km();
    void m_mile();
    void mile_m();
    void km_mile();
    void mile_km();
    void feet_m();
    void m_feet();
    void inch_m();
    void m_inch();
    void yard_m();
    void m_yard();

};
class temp:public input
{
public:
    void cel_f();
    void f_cel();
    void cel_k();
    void k_cel();
    void f_k();
    void k_f();
};
class area :public input
{
public:
    void mmSq_cmSq();
    void cmSq_mmSq();
    void cmSq_mSq ();
    void mSq_cmSq ();
    void mSq_kmSq ();
    void kmSq_mSq ();
    void feetSq_mSq();
    void mSq_feetSq();
    void yardSq_mSq();
    void mSq_yardSq();
    void mileSq_kmSq();
    void kmSq_mileSq();
    void acre_kmSq();
    void kmSq_acre();
    void acre_hect();
    void hect_acre();
};

class weight:public input
{
public:
    void milligm_gm();
    void gm_milligm();
    void gm_kg();
    void kg_gm();
    void kg_mton();
    void mton_kg();
    void pound_kg();
    void kg_pound();
    void gm_pound();
    void pound_gm();
};

class volume:public input
{
public:
    void mL_L();
    void L_mL();
    void mmQ_cmQ();
    void cmQ_mmQ();
    void cmQ_mQ ();
    void mQ_cmQ ();
    void inchQ_mQ();
    void mQ_inchQ();
    void feetQ_mQ();
    void mQ_feetQ();
    void mQ_gallon();
    void gallon_mQ();
    void L_gallon();
    void gallon_L();

};
void choose()
{
    cout << "\t\t\t***************************************************" << endl;
    cout << "\t\t\t*\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Choose Your Unit Conversion \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2*" << endl;
    cout << "\t\t\t***************************************************" << endl;

}
void cal_display()
{
    system("cls");
    cout << "\t\t\t**************************************************" << endl;
    cout << "\t\t\t*\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    Calculation Display     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2*" << endl;
    cout << "\t\t\t**************************************************" << endl;
}
void error_msg()
{
    system("cls");
    cout << "\t\t\t**************************************************" << endl;
    cout << "\t\t\t*\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2       Error Message        \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2*" << endl;
    cout << "\t\t\t**************************************************" << endl;
    cout << "\n\t\t\t\tYou have entered unavailable option\n";
    cout << "\n\t\t\t  Please Enter any one of below available options\n";

}
void conti()
{
    cout << "\n\n\n\t\t\t\tPress any key to continue...";
    cin.ignore();
    cin.get();
    system("cls");

}
void length::mm_m()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Millimeter = ";
    cin >> j;
    cout << "\n\t\t\t\tMeter = " << j*0.001;
}
void length::m_mm()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Meter = ";
    cin >> j;
    cout << "\n\t\t\t\tMillimeter = " << j*1000;
}
void length::cm_m()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Centimeter = ";
    cin >> j;
    cout << "\n\t\t\t\tMeter = " << j*0.01;
}
void length::m_cm()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Meter = ";
    cin >> j;
    cout << "\n\t\t\t\tCentimeter = " << j*100;
}
void length::cm_km()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Centimeter = ";
    cin >> j;
    cout << "\n\t\t\t\tKilometer = " << j*0.00001;
}
void length::km_cm()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Kilometer = ";
    cin >> j;
    cout << "\n\t\t\t\tCentimeter = " << j*100000;
}
void length::m_mile()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Meter = ";
    cin >> j;
    cout << "\n\t\t\t\tMile = " << j*0.00062;
}
void length::mile_m()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Mile = ";
    cin >> j;
    cout << "\n\t\t\t\tMeter = " << j*1609.344;
}
void length::km_mile()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Kilometer = ";
    cin >> j;
    cout << "\n\t\t\t\tMile = " << j*0.6213712;
}
void length::mile_km()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Mile = ";
    cin >> j;
    cout << "\n\t\t\t\tKilometer = " << j*1.60934;
}
void length::feet_m()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Feet = ";
    cin >> j;
    cout << "\n\t\t\t\tMeter = " << j*0.3048;
}
void length::m_feet()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Meter = ";
    cin >> j;
    cout << "\n\t\t\t\tFeet = " << j*3.28084;
}
void length::inch_m()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Inch = ";
    cin >> j;
    cout << "\n\t\t\t\tMeter = " << j*0.0254;
}
void length::m_inch()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Meter = ";
    cin >> j;
    cout << "\n\t\t\t\tInch = " << j*39.37008;
}
void length::yard_m()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Yard = ";
    cin >> j;
    cout << "\n\t\t\t\tMeter = " << j*0.9144;
}
void length::m_yard()
{
    cal_display();
    cout << "\n\t\t\t\tEnter Meter = ";
    cin >> j;
    cout << "\n\t\t\t\tYard = " << j*1.09361;
}




void temp::cel_f()
{
    cal_display();
    cout<<"\n\t\t\t\tCelsius= ";
    cin>>j;
    cout<<"\n\t\t\t\tFahrenheit= " <<(((9*j)/5)+32);
}
void temp::f_cel()
{
    cal_display();
    cout<<"\n\t\t\t\tFahrenheit= ";
    cin>>j;
    cout<<"\n\t\t\t\tCelsius= "<<(((j-32)/9)*5);
}
void temp::cel_k()
{
    cal_display();
    cout<<"\n\t\t\t\tCelsius= ";
    cin>>j;
    cout<<"\n\t\t\t\tKelvin= "<<j+273;
}
void temp::k_cel()
{
    cal_display();
    cout<<"\n\t\t\t\tKelvin= ";
    cin>>j;
    cout<<"\n\t\t\t\tCelsius= "<<j-273;
}
void temp::f_k()
{
    cal_display();
    cout<<"\n\t\t\t\tFahrenheit= ";
    cin>>j;
    cout<<"\n\t\t\t\tKelvin= "<<(j-273.15)*1.8+32;

}
void temp::k_f()
{
    cal_display();
    cout<<"\n\t\t\t\tKelvin= ";
    cin>>j;
    cout<<"\n\t\t\t\tFahrenheit= "<< (5*(j+ 459.67))/9;

}
void weight::milligm_gm()
{
    cal_display();
    cout<<"\n\t\t\t\tMilligram = ";
    cin>>j;
    cout<<"\n\t\t\t\tGram = "<< j*0.001;

}
void weight::gm_milligm()
{
    cal_display();
    cout<<"\n\t\t\t\tGram = ";
    cin>>j;
    cout<<"\n\t\t\t\tMilligram = "<< j*1000;
}
void weight::gm_kg()
{
    cal_display();
    cout<<"\n\t\t\t\tGram = ";
    cin>>j;
    cout<<"\n\t\t\t\tKilogram = "<< j*0.001;
}
void weight::kg_gm()
{
    cal_display();
    cout<<"\n\t\t\t\tKilogram = ";
    cin>>j;
    cout<<"\n\t\t\t\tGram = "<< j*1000;
}
void weight::kg_mton()
{
    cal_display();
    cout<<"\n\t\t\t\tKilogram = ";
    cin>>j;
    cout<<"\n\t\t\t\tMetric ton = "<< j*0.001;
}
void weight::mton_kg()
{
    cal_display();
    cout<<"\n\t\t\t\tMetric ton = ";
    cin>>j;
    cout<<"\n\t\t\t\tKilogram = "<< j*1000;
}
void weight::pound_kg()
{
    cal_display();
    cout<<"\n\t\t\t\tPound = ";
    cin>>j;
    cout<<"\n\t\t\t\tKilogram = "<< j*0.45359;
}
void weight::kg_pound()
{
    cal_display();
    cout<<"\n\t\t\t\tKilogram = ";
    cin>>j;
    cout<<"\n\t\t\t\tPound = "<< j*2.20462;
}
void weight::gm_pound()
{
    cal_display();
    cout<<"\n\t\t\t\tGram = ";
    cin>>j;
    cout<<"\n\t\t\t\tPound = "<< j*0.0022;
}
void weight::pound_gm()
{
    cal_display();
    cout<<"\n\t\t\t\tPound = ";
    cin>>j;
    cout<<"\n\t\t\t\tGram = "<< j*453.59237;
}



void area::mmSq_cmSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquqre mm= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare cm= "<<j*.01;
}
void area::cmSq_mmSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare cm= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare mm= "<<j*100;
}
void area::cmSq_mSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare cm= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare m= "<<j*.0001;
}
void area::mSq_cmSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare m= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare cm= "<<j*10000;
}
void area::mSq_kmSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare m= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare km= "<<j*.000001;
}
void area::kmSq_mSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare km= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare m= "<<j*1000000;
}
void area::feetSq_mSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare feet= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare m= "<<j*.0929;
}
void area::mSq_feetSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare m= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare feet= "<<j*10.76391;
}
void area::yardSq_mSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare yard= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare m= "<<j*.83613;
}
void area::mSq_yardSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare m= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare yard= "<<j*1.19599;
}
void area::mileSq_kmSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare mile= ";
    cin>>j;
    cout<<"\n\t\t\t\tsquare km= "<<j*2.5899;
}
void area::kmSq_mileSq()
{
    cal_display();
    cout<<"\n\t\t\t\tsquare km= " ;
    cin>>j;
    cout<<"\n\t\t\t\tsquare mile= "<<j*.3861;
}
void area::acre_hect()
{
    cal_display();
    cout<<"\n\t\t\t\tAcre= ";
    cin>>j;
    cout<<"\n\t\t\t\tHector= "<<j*.40469;
}
void area::hect_acre()
{
    cal_display();
    cout<<"\n\t\t\t\tHector= ";
    cin>>j;
    cout<<"\n\t\t\t\tAcre= " <<j*2.47105;
}
void area::acre_kmSq()
{
    cal_display();
    cout<<"\n\t\t\t\tAcre= ";
    cin>>j;
    cout<<"\n\t\t\t\tSquare km= "<<j*.00405;
}
void area::kmSq_acre()
{
    cal_display();
    cout<<"\n\t\t\t\tSquare km= ";
    cin>>j;
    cout<<"\n\t\t\t\tAcre= "<<j*247.10538;

}





void volume::mL_L()
{
    cal_display();
    cout<<"\n\t\t\t\tMilli litre= ";
    cin>>j;
    cout<<"\n\t\t\t\tLitre= "<<j*.001;
}
void volume::L_mL()
{
    cal_display();
    cout<<"\n\t\t\t\tLitre= ";
    cin>>j;
    cout<<"\n\t\t\t\tMilli Litre= "<<j*1000;
}
void volume::cmQ_mmQ()
{
    cal_display();
    cout<< "\n\t\t\t\tCubic cm= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic mm= "<<j*1000;
}
void volume::mmQ_cmQ()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic mm= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic cm= "<<j*.001;
}
void volume::cmQ_mQ()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic cm= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic meter= "<<j*.000001;
}
void volume::mQ_cmQ()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic meter= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic cm= "<<j*1000000;
}
void volume::inchQ_mQ()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic inch= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic meter= "<<j*.00002;
}
void volume::mQ_inchQ()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic meter= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic inch= "<<j*61023.74409;
}
void volume::feetQ_mQ()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic feet= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic meter= "<<j*1222 ;

}
void volume::mQ_feetQ()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic meter= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic feet= "<<j*123;
}
void volume::mQ_gallon()
{
    cal_display();
    cout<<"\n\t\t\t\tCubic meter= ";
    cin>>j;
    cout<<"\n\t\t\t\tGallon= "<<j*264.17205;
}
void volume::gallon_mQ()
{
    cal_display();
    cout<<"\n\t\t\t\tGallon= ";
    cin>>j;
    cout<<"\n\t\t\t\tCubic meter= "<<j*.00379;
}
void volume::L_gallon()
{
    cal_display();
    cout<<"\n\t\t\t\tLitre= ";
    cin>>j;
    cout<<"\n\t\t\t\tGallon= "<<j*.21997;
}
void volume::gallon_L()
{
    cal_display();
    cout<<"\n\t\t\t\tGallon= ";
    cin>>j;
    cout<<"\n\t\t\t\tLitre= "<<j*4.54609;
}


void start()
{
    system("cls");
    length l;
    temp t;
    weight w;
    area a;
    volume v;
    char x,y[2];
    system("Color 0A");
    while(1)
    {
        cout << "\t\t\t**************************************************" << endl;
        cout << "\t\t\t*\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO UNIT CONVERTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2*" << endl;
        cout << "\t\t\t**************************************************" << endl;
        cout << "\n\t\t\t\t1) Length\n\t\t\t\t2) Temperature\n\t\t\t\t3) Weight\n\t\t\t\t4) Area\n\t\t\t\t5) Volume\n\t\t\t\t6) Exit";
        cout << "\n\n\t\t\t\tPlease choose your Conversion Type:";
        cin >> x;
        if(x=='1')
        {
            while(1)
            {
                system("cls");
                choose();

                cout<<"\n\t\t\t\t 1) Millimeter to Meter"<<endl;
                cout<<"\t\t\t\t 2) Meter to Millimeter"<<endl;
                cout<<"\t\t\t\t 3) Centimeter to Meter"<<endl;
                cout<<"\t\t\t\t 4) Meter to Centimeter"<<endl;
                cout<<"\t\t\t\t 5) Centimeter to Kilometer"<<endl;
                cout<<"\t\t\t\t 6) Kilometer to Centimeter"<<endl;
                cout<<"\t\t\t\t 7) Meter to Mile"<<endl;
                cout<<"\t\t\t\t 8) Mile to Meter"<<endl;
                cout<<"\t\t\t\t 9) Kilometer to Mile"<<endl;
                cout<<"\t\t\t\t10) Mile to Kilometer"<<endl;
                cout<<"\t\t\t\t11) Foot to Meter"<<endl;
                cout<<"\t\t\t\t12) Meter to Foot"<<endl;
                cout<<"\t\t\t\t13) Inch to Meter"<<endl;
                cout<<"\t\t\t\t14) Meter to Inch"<<endl;
                cout<<"\t\t\t\t15) Yard to Meter"<<endl;
                cout<<"\t\t\t\t16) Meter to Yard"<<endl;
                cout<<"\t\t\t\t17) Back to The Main Menu"<<endl;
                cout << "\n\n\t\t\tPlease Enter Your Choice= ";
                cin >> y;
                if (y[0] == '1' && y[1] == '\0')
                {
                    l.mm_m();
                    conti();
                }
                else if (y[0] == '2' && y[1] == '\0')
                {
                    l.m_mm();
                    conti();
                }
                else if (y[0] == '3' && y[1] == '\0')
                {
                    l.cm_m();
                    conti();
                }
                else if (y[0] == '4' && y[1] == '\0')
                {
                    l.m_cm();
                    conti();
                }
                else if (y[0] == '5' && y[1] == '\0')
                {
                    l.cm_km();
                    conti();
                }
                else if (y[0] == '6' && y[1] == '\0')
                {
                    l.km_cm();
                    conti();
                }
                else if (y[0] == '7' && y[1] == '\0')
                {
                    l.m_mile();
                    conti();
                }
                else if (y[0] == '8' && y[1] == '\0')
                {
                    l.mile_m();
                    conti();
                }
                else if (y[0] == '9' && y[1] == '\0')
                {
                    l.km_mile();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '0')
                {
                    l.mile_km();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '1')
                {
                    l.feet_m();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '2')
                {
                    l.m_feet();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '3')
                {
                    l.inch_m();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '4')
                {
                    l.m_inch();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '5')
                {
                    l.yard_m();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '6')
                {
                    l.m_yard();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '7')
                {
                    system("cls");
                    break;
                }
                else
                {
                    error_msg();
                    conti();
                }
            }
        }
        else if (x=='2')
        {
            system("cls");
            while(1)
            {
                choose();
                cout << "\n\n\t\t\t\t1) Celsius  to Fahrenheit"<<endl;
                cout << "\t\t\t\t2) Fahrenheit  to Celsius"<<endl;
                cout << "\t\t\t\t3) Celsius  to Kelvin"<<endl;
                cout << "\t\t\t\t4) Kelvin  to Celsius"<<endl;
                cout << "\t\t\t\t5) Fahrenheit  to Kelvin"<<endl;
                cout << "\t\t\t\t6) Kelvin  to Fahrenheit"<<endl;
                cout << "\t\t\t\t7) Back to The Main Menu"<<endl;
                cout << "\n\n\t\t\tPlease Enter Your Choice= ";
                cin >> y;
                if(y[0]=='1' && y[1] == '\0')
                {
                    t.cel_f();
                    conti();
                }
                else if(y[0]=='2' && y[1] == '\0')
                {
                    t.f_cel();
                    conti();
                }
                else if(y[0]=='3' && y[1] == '\0')
                {
                    t.cel_k();
                    conti();
                }
                else if(y[0]=='4' && y[1] == '\0')
                {
                    t.k_cel();
                    conti();
                }
                else if(y[0]=='5' && y[1] == '\0')
                {
                    t.f_k();
                    conti();
                }
                else if (y[0]=='6' && y[1] == '\0')
                {
                    t.k_f();
                    conti();
                }
                else if(y[0]=='7' && y[1] == '\0')
                {
                    system("cls");
                    break;
                }
                else
                {
                    error_msg();
                    conti();
                }
            }

        }
        else if(x=='3')
        {
            while(1)
            {
                system("cls");
                choose();
                cout << "\n\n\t\t\t\t 1) Milligram to Gram"<<endl;
                cout << "\t\t\t\t 2) Gram  to Milligram"<<endl;
                cout << "\t\t\t\t 3) Gram  to Kilogram"<<endl;
                cout << "\t\t\t\t 4) Kilogram  to Gram"<<endl;
                cout << "\t\t\t\t 5) Kilogram  to Metric ton"<<endl;
                cout << "\t\t\t\t 6) Metric ton  to Kilogram"<<endl;
                cout << "\t\t\t\t 7) Pound to Kilogram"<<endl;
                cout << "\t\t\t\t 8) Kilogram to Pound"<<endl;
                cout << "\t\t\t\t 9) Pound to Gram"<<endl;
                cout << "\t\t\t\t10) Gram to Pound"<<endl;
                cout << "\t\t\t\t11) Back to The Main Menu"<<endl;
                cout << "\n\n\t\t\tPlease Enter Your Choice= ";
                cin >> y;
                if (y[0] == '1' && y[1] == '\0')
                {
                    w.milligm_gm();
                    conti();
                }
                else if (y[0] == '2' && y[1] == '\0')
                {
                    w.gm_milligm();
                    conti();
                }
                else if (y[0] == '3' && y[1] == '\0')
                {
                    w.gm_kg();
                    conti();
                }
                else if (y[0] == '4' && y[1] == '\0')
                {
                    w.kg_gm();
                    conti();
                }
                else if (y[0] == '5' && y[1] == '\0')
                {
                    w.kg_mton();
                    conti();
                }
                else if (y[0] == '6' && y[1] == '\0')
                {
                    w.mton_kg();
                    conti();
                }
                else if (y[0] == '7' && y[1] == '\0')
                {
                    w.pound_kg();
                    conti();
                }
                else if (y[0] == '8' && y[1] == '\0')
                {
                    w.kg_pound();
                    conti();
                }
                else if (y[0] == '9' && y[1] == '\0')
                {
                    w.pound_gm();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '0')
                {
                    w.gm_pound();
                    conti();
                }
                else if (y[0] == '1' && y[1] == '1')
                {
                    system("cls");
                    break;
                }
                else
                {
                    error_msg();
                    conti();
                }
            }
        }
        else if(x=='4')
        {
            while(1)
            {
                system("cls");
                choose();
                cout<<"\n\n\t\t\t\t 1: Square mm-Square cm"<<endl;
                cout<<"\t\t\t\t 2: square cm-Square mm"<<endl;
                cout<<"\t\t\t\t 3: square cm-square m"<<endl;
                cout<<"\t\t\t\t 4: Square m-Square cm"<<endl;
                cout<<"\t\t\t\t 5: Square m-Square km"<<endl;
                cout<<"\t\t\t\t 6: Square km-Square m"<<endl;
                cout<<"\t\t\t\t 7: Square feet-Square m"<<endl;
                cout<<"\t\t\t\t 8: Square m-Square feet"<<endl;
                cout<<"\t\t\t\t 9: Square Yard-Square m"<<endl;
                cout<<"\t\t\t\t10: Square m-Square yard"<<endl;
                cout<<"\t\t\t\t11: Square mile-Square km"<<endl;
                cout<<"\t\t\t\t12: Square km-Square mile"<<endl;
                cout<<"\t\t\t\t13: Acre-Hectare"<<endl;
                cout<<"\t\t\t\t14: Hectare-Acre"<<endl;
                cout<<"\t\t\t\t15: Square km-Acre "<<endl;
                cout<<"\t\t\t\t16: Acre-Square km"<<endl;
                cout<<"\t\t\t\t17) Back to The Main Menu"<<endl;
                cout << "\n\n\t\t\tPlease Enter Your Choice= ";
                cin >> y;
                if (y[0] == '1' && y[1] == '\0')
                {
                    a.mmSq_cmSq();
                    conti();
                }
                else if (y[0] == '2' && y[1] == '\0')
                {
                    a.cmSq_mmSq();
                    conti();
                }
                else if (y[0] == '3' && y[1] == '\0')
                {
                    a.cmSq_mSq();
                    conti();
                }
                else if (y[0] == '4' && y[1] == '\0')
                {
                    a.mSq_cmSq();
                    conti();
                }
                else if (y[0] == '5' && y[1] == '\0')
                {
                    a.mSq_kmSq();
                    conti();
                }
                else if (y[0] == '6' && y[1] == '\0')
                {
                    a.kmSq_mSq();
                    conti();
                }
                else if (y[0] == '7' && y[1] == '\0')
                {
                    a.feetSq_mSq();
                    conti();
                }
                else if (y[0] == '8' && y[1] == '\0')
                {
                    a.mSq_feetSq();
                    conti();
                }
                else if (y[0] == '9' && y[1] == '\0')
                {
                    a.yardSq_mSq();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '0')
                {
                    a.mSq_yardSq();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '1')
                {
                    a.mileSq_kmSq();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '2')
                {
                    a.kmSq_mileSq();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '3')
                {
                    a.acre_hect();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '4')
                {
                    a.hect_acre();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '5')
                {
                    a.kmSq_acre();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '6')
                {
                    a.acre_kmSq();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '7')
                {
                    system("cls");
                    break;
                }
                else
                {
                    error_msg();
                    conti();
                }
            }


        }
        else if (x=='5')
        {
            while(1)
            {
                system("cls");
                choose();
                cout<<"\n\n\n\t\t\t\t 1 : ml-Litre"<<endl;
                cout<<"\t\t\t\t 2 : Litre-ml"<<endl;
                cout<<"\t\t\t\t 3 : Cubic mm-Cubic cm"<<endl;
                cout<<"\t\t\t\t 4 : Cubic cm-Cubic mm"<<endl;
                cout<<"\t\t\t\t 5 : Cubic cm-Cubic m"<<endl;
                cout<<"\t\t\t\t 6 : Cubic m-Cubic cm"<<endl;
                cout<<"\t\t\t\t 7 : Cubic Inch-Cubic m"<<endl;
                cout<<"\t\t\t\t 8 : Cubic m-Cubic Inch"<<endl;
                cout<<"\t\t\t\t 9 : Cubic feet-Cubic m"<<endl;
                cout<<"\t\t\t\t10 : Cubic m-Cubic feet"<<endl;
                cout<<"\t\t\t\t11 : Cubic m-Gallon (uk)"<<endl;
                cout<<"\t\t\t\t12 : Gallon-Cubic m"<<endl;
                cout<<"\t\t\t\t13 : Litre-Gallon"<<endl;
                cout<<"\t\t\t\t14 : Gallon-Litre"<<endl;
                cout<<"\t\t\t\t15 : Back to The Main Menu"<<endl;

                cout << "\n\n\t\t\tPlease Enter Your Choice= ";
                cin >> y;
                if (y[0] == '1' && y[1] == '\0')
                {
                    v.mL_L();
                    conti();
                }
                else if (y[0] == '2' && y[1] == '\0')
                {
                    v.L_mL();
                    conti();
                }
                else if (y[0] == '3' && y[1] == '\0')
                {
                    v.mmQ_cmQ();
                    conti();
                }
                else if (y[0] == '4' && y[1] == '\0')
                {
                    v.cmQ_mmQ();
                    conti();
                }
                else if (y[0] == '5' && y[1] == '\0')
                {
                    v.cmQ_mQ();
                    conti();
                }
                else if (y[0] == '6' && y[1] == '\0')
                {
                    v.mQ_cmQ();
                    conti();
                }
                else if (y[0] == '7' && y[1] == '\0')
                {
                    v.inchQ_mQ();
                    conti();
                }
                else if (y[0] == '8' && y[1] == '\0')
                {
                    v.mQ_inchQ();
                    conti();
                }
                else if (y[0] == '9' && y[1] == '\0')
                {
                    v.feetQ_mQ();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '0')
                {
                    v.mQ_feetQ();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '1')
                {
                    v.mQ_gallon();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '2')
                {
                    v.gallon_mQ();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '3')
                {
                    v.gallon_L();
                    conti();
                }
                else if ( y[0] == '1' && y[1] == '4')
                {
                    v.L_gallon();
                    conti();
                }
                else if (y[0] == '1' && y[1] == '5')
                {
                    system("cls");
                    break;
                }
                else
                {
                    error_msg();
                    conti();
                }
            }
        }
        else if(x=='6')
        {
            break;
        }
        else
        {
            error_msg();
            conti();
        }



    }
}

int main()
{
    start();
    return 0;
}
