#pragma once
#include<iostream>
#include<cmath>
#include<string>

struct Vec2
{
    float x,y;


    //Operator overloading
    Vec2 operator+(const Vec2& other)const{
        return {x+other.x,y+other.y};
    }
    Vec2 operator-(const Vec2& other)const{
        return {x-other.x,y-other.y};
    }
    Vec2 operator*(float s)const{
        return {x*s,y*s};
    }
    Vec2 operator/(float s)const{
        if (s==0.0f)
        {
            return {0.0f,0.0f};
        }
        
        return {x/s,y/s};
    }
    bool operator==(const Vec2& other)const{
        return x==other.x && y==other.y;
    }

    
    //the magnitude of the vector
    float length()const{
        return{sqrtf(x*x+y*y)};
    }
    //it gives a copy a normalised vector 
    Vec2 normalise()const{
        
        float len = length();
        
        if(len==0.0f){
            return {0.0f,0.0f};
        }
        
        return{x/len, y/len};
    }
    
};

//The dot product of the vector
float dot(const Vec2 a,const Vec2 b){
    return a.x*b.x+a.y*b.y;
}

Vec2 lerp(const Vec2 a, const Vec2 b, float t){
    if(t==0.0f){
        return a;
    }
    return a+(b-a)*t;
}

std::string toString(Vec2 a){
    std::string x_string = std::to_string(a.x);
    std::string y_string = std::to_string(a.y);
    return "("+x_string + "," + y_string+")"; 
}




