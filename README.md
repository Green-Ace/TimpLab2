PART 1
1)
2) cd Green-Ace/workspace
   git clone git@github.com:Green-Ace/TimpLab2.git
   cd TimpLab2 
   ![изображение](https://user-images.githubusercontent.com/112771063/223440455-c18d9f55-4119-42c7-a3df-6737c48a994c.png)

3) subl hello_world.cpp
  ![изображение](https://user-images.githubusercontent.com/112771063/223445500-5e89bcd9-efe8-4ecf-8ba8-32a7b55741ba.png)
 4) git add .
  
  5) git commit -m "added file hello_world.cpp" 
    ![изображение](https://user-images.githubusercontent.com/112771063/223451417-3a36ff23-3185-4967-a5b6-      c7131b86994d.png)
  
  6)![изображение](https://user-images.githubusercontent.com/112771063/223452618-c1a6e47b-bc2f-4cd8-8be8-9cef9b07755c.png)

  7) git add .
     git commit -m "added input username"

PART 2
1) git branch patch1
   git checkout patch1
   
2,3) ![изображение](https://user-images.githubusercontent.com/112771063/223515927-3e843234-51e7-492e-8814-3d78a22c93d8.png)
      ![изображение](https://user-images.githubusercontent.com/112771063/223516280-04ceaff5-48b4-44bc-9760-bd0a9b6c7a33.png)
   6) ![изображение](https://user-images.githubusercontent.com/112771063/223517350-7dce072b-7744-4afc-b2b3-02691a7c56e1.png)
   7) git commit -am "created comments"
       git push origin patch1
      ![изображение](https://user-images.githubusercontent.com/112771063/223519430-a72fa09d-e6d1-4802-8dea-f3b9906e3c9f.png)

   8)![изображение](https://user-images.githubusercontent.com/112771063/223520146-4daa8e38-ad8b-45e5-ac4b-f7e180f81720.png)

   9)![изображение](https://user-images.githubusercontent.com/112771063/223520981-574bd6da-56a0-47aa-b34b-8b31495e8817.png)

   10) git checkout main
       git pull origin main
       ![изображение](https://user-images.githubusercontent.com/112771063/223521940-48df9709-663f-4c87-b93f-a87a0bcbf4bc.png)
       git log
       ![изображение](https://user-images.githubusercontent.com/112771063/223522691-2e7d178a-d60f-4172-84bc-4230febd2c4c.png)
   12) git branch -d patch1

       PART 3
    1)git checkout -b patch2
    
    2) clang-format -style=Mozilla -i hello_world.cpp
    
    3)git commit -am "changed format" 
      git push origin patch2 
      ![изображение](https://user-images.githubusercontent.com/112771063/223527520-ff8988cc-17de-4ead-b630-00d2dee3b613.png)
    
    4) ![изображение](https://user-images.githubusercontent.com/112771063/223529309-9b282f1f-4b65-4230-9e02-b75a948c2728.png)
    
    5) ![изображение](https://user-images.githubusercontent.com/112771063/223529782-9fee2142-ec79-47ef-ad90-d76ec522d36e.png)

   6) git checkout main
      git pull origin main
      git checkout patch2
      git rebase main
      git add .
      git rebase --continue
      
      
      7) git push --force origin patch2
       
       8) ![изображение](https://user-images.githubusercontent.com/112771063/223536691-d0d53e72-96dd-46fb-829b-edb76575d5a9.png)
       9) ![изображение](https://user-images.githubusercontent.com/112771063/223536848-211822f4-d297-454b-9efb-c7a63387d82f.png)


    
       
      

      
     
         
















