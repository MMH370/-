
​package SunPeishuai;

 

import java.io.BufferedReader;

import java.io.IOException;

import java.io.InputStreamReader;

import java.util.Scanner;



public class Tongxunlu {

 

       static BufferedReader in = new BufferedReader(new InputStreamReader(System.in)); 

       static String id="",name="", address="", phone="", sex="", qq="", yn="";

       static Read[] c = new Read[10];

       static int num = 0;

       
/*1.缩进：程序块要采用缩进风格编写，缩进只使用TAB键，不能使用空格键（编辑器中请将TAB设置为4格）；     */
       public static void main(String[] args) {

           while(true){

 

                System.out.println("*****************************************");//捕捉异常的目的是为了处理它

                System.out.println("*             通讯录功能选项                                  *");

                System.out.println("*---------------------------------------*");

                System.out.println("*               1.添加                  *");

                System.out.println("*               2.修改                  *");

                System.out.println("*               3.删除                  *");

                System.out.println("*               4.查询                  *");

                System.out.println("*               5.退出                  *");

                System.out.println("*****************************************");
/*1.缩进：程序块要采用缩进风格编写，缩进只使用TAB键，不能使用空格键（编辑器中请将TAB设置为4格）；     */
                try{

                       System.out.println("请你按键选择!");

                       int s = new Scanner(System.in).nextInt();
					   /*对齐：程序块的分界符左大括号"{" 和右大括号"}"都另起一行，应各独占一行并且位于同一列，同时与引用它们的语句左对齐；*/
                       switch(s){

                                  case 1:
/*间隔：类、方法及相对独立的程序块之间、变量说明之后必须加空行；*/
                                           Add();

                                           break;
//每当一个case顺着往下执行时(因为没有break语句)，通常应在break语句的位置添加注释；
                                  case 2:

                                           Modify();

                                           break;

                                  case 3:

                                           Delect();

                                           break;

                                  case 4:

                                           Query();

                                           break;

                                  case 5:

                                	        System.out.println("退出成功");

                                	        System.exit(0);

                                	        break;

                                  default:

                                	        System.out.println("输入错误,请从新输入");

                                } 

                     } catch(Exception e){                           //异常处理

                    	 System.out.println("你必须输入1~5的数字类型！"); //捕捉异常的目的是为了处理它

                         } 

                 } 

        }

       /*                添加联系人方法               */

       public static void Add() throws IOException{ 

    	   System.out.println("请输入ID"); 

    	   id = in.readLine(); 

    	   System.out.println("请输入名字");

    	   name = in.readLine(); 

    	   System.out.println("请输入电话"); 

    	   phone = in.readLine(); 

    	   System.out.println("请输入QQ"); 

    	   qq = in.readLine();

    	   while(true) { //在使用局部变量的过程，按就近原则处理。不允许定义一个局部变量，然后在很远的地方才使用；

    		   System.out.println("请输入性别");

    		   sex = in.readLine(); 

    		   if(sex.equals("男")||sex.equals("女")) break; 

    		   System.out.println("性别输入错误,重新输入"); 

    		   } 

    	    System.out.println("请输入地址"); 

    		address = in.readLine();

    		System.out.println("输入完成,是否添加(Y/N)");

    		yn = in.readLine();

    		if(yn.equals("Y") || yn.equals("y")) { 

    	    c[num] = new Read(id,name,phone,qq,sex,address);

    	    num++;

    	    System.out.println("添加成功！");

    			   }else {

           System.out.println("添加失败！"); 

    			   }

           } 

       /*                 删除联系人方法                */

           public static String Delect() throws IOException { 
		   //在处理 String 的时候要尽量使用 StringBuffer 类。

        	   System.out.println("请输入要删除的名字：");

        	   name = in.readLine(); 

        	   if(num==0) {

        		   System.out.println("目前没有联系人，请先添加联系人！");

        	   }

        	   for(int i=0;i<num;i++) { 

        		   if(name.equals(c[i].Name())) {

        			   c[i]=c[num-1];

        			  num--;

        			  System.out.println("删除成功");

        			   } 

        	   return "";

		 

        	   }

           /*             修改联系人方法                  */

           public static void Modify() throws IOException { 

        		System.out.println("请输入要修改的名字：");

        		name = in.readLine();

        	    for(int i=0;i<num;i++) {

        		   if(name.equals(c[i].Name())) {

        			   System.out.println("请从新输入信息:"); 

        			   System.out.println("请输入ID"); 

        			   id = in.readLine();

        			   System.out.println("请输入名字");

        			   name = in.readLine(); 

        			   System.out.println("请输入电话");

        			   phone = in.readLine(); 

        			   System.out.println("请输入QQ"); 

        			   qq = in.readLine(); 

        			   System.out.println("请输入性别"); 

        			   sex = in.readLine(); 

        			   System.out.println("请输入地址");

        			   address = in.readLine();

 

                     c[i] = new Read(id,name,phone,qq,sex,address);

                     break;

              }

               if(i==num)

               System.out.println("修改失败！");

           }

     }

      /*                 查询联系人方法                       */

          public static void Query() throws IOException{

            System.out.println("请输入要查询的联系人名字:");

            name = in.readLine();

            if(num==0) {

     		   System.out.println("目前没有联系人，请先添加联系人！");

     	   }

         for(int i=0;i<num;i++){

         if(name.equals(c[i].Name())){

           System.out.println("查询成功！");

           System.out.println("你要查找的联系人信息为：");

           System.out.println("ID:"+c[i].Id()+"\n名字:"+c[i].Name()+"\n话:"+c[i].Phone()+"\nQQ:"+c[i].QQ()+"\n性别:"+c[i].Sex()+"\n地址:"+c[i].Address()); 

           break;

           }

         if(i==num)

         System.out.println("查找失败！");

        }

 

      }

 

}

      

   class Read{

                      private String id;

                      private String name;

                      private String phone;

                      private String qq;

                      private String sex;

                      private String address;

 

             public String Name(){return name;}       

             public String Id(){return id;} 

             public String Phone(){ return phone; }

             public String QQ(){ return qq; } 

             public String Sex(){ return sex; }

             public String Address(){ return address; } 

             public Read(String id,String name,String phone,String qq,String sex,String address){

             this.id = id; this.name = name; this.phone = phone; this.qq = qq; this.sex =sex; this.address = address;

               }

 

 }

 

 

 

 

 

 

 

​
