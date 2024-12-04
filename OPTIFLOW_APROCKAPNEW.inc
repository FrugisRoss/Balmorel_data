SET APROCKAPNEW(YYY,AAA,PROC)     'Areas for possible location of new Proc or capacity expansion of existing Proc'                                           
                                                                                                                                                             
*Rossella LUOptiflow                                                                                                                                         
                                                                                                                                                             
/                                                                                                                                                            
                                                                                                                                                             
***CO2                                                                                                                                                       
2020                                                                                                               .    Aalborg .    CO2_DAC_20              
2025                                                                                                               .    Aalborg .    CO2_DAC_25              
2030                                                                                                               .    Aalborg .    CO2_DAC_30              
2035                                                                                                               .    Aalborg .    CO2_DAC_35              
2040                                                                                                               .    Aalborg .    CO2_DAC_40              
2045                                                                                                               .    Aalborg .    CO2_DAC_45              
2050                                                                                                               .    Aalborg .    CO2_DAC_50              
*                                                                                                                                                            
2020                                                                                                               .    Aalborg .    CO2_STO                 
2025                                                                                                               .    Aalborg .    CO2_STO                 
2030                                                                                                               .    Aalborg .    CO2_STO                 
2035                                                                                                               .    Aalborg .    CO2_STO                 
2040                                                                                                               .    Aalborg .    CO2_STO                 
2045                                                                                                               .    Aalborg .    CO2_STO                 
2050                                                                                                               .    Aalborg .    CO2_STO                 
                                                                                                                                                             
* OBS FF                                                                                                                                                     
$ifi not %baloptCCS%==yes $goto NO_CCS                                                                                                                       
2020                                                                                                               .    Aalborg .    CO2_Seq_20              
2025                                                                                                               .    Aalborg .    CO2_Seq_25              
2030                                                                                                               .    Aalborg .    CO2_Seq_30              
2035                                                                                                               .    Aalborg .    CO2_Seq_35              
2040                                                                                                               .    Aalborg .    CO2_Seq_40              
2045                                                                                                               .    Aalborg .    CO2_Seq_45              
2050                                                                                                               .    Aalborg .    CO2_Seq_50              
$label NO_CCS                                                                                                                                                
                                                                                                                                                             
*OBS FF                                                                                                                                                      
$ifi not %baloptgasbridge%==yes $goto NO_BIOGAS                                                                                                              
2020                                                                                                               .    Aalborg .    Digestion_Tank_20       
2025                                                                                                               .    Aalborg .    Digestion_Tank_25       
2030                                                                                                               .    Aalborg .    Digestion_Tank_30       
2035                                                                                                               .    Aalborg .    Digestion_Tank_35       
2040                                                                                                               .    Aalborg .    Digestion_Tank_40       
2045                                                                                                               .    Aalborg .    Digestion_Tank_45       
2050                                                                                                               .    Aalborg .    Digestion_Tank_50       
                                                                                                                                                             
2020                                                                                                               .    Aalborg .    Methanation_20          
2025                                                                                                               .    Aalborg .    Methanation_25          
2030                                                                                                               .    Aalborg .    Methanation_30          
2035                                                                                                               .    Aalborg .    Methanation_35          
2040                                                                                                               .    Aalborg .    Methanation_40          
2045                                                                                                               .    Aalborg .    Methanation_45          
2050                                                                                                               .    Aalborg .    Methanation_50          
                                                                                                                                                             
2020                                                                                                               .    Aalborg .    Biogas_Upgrading_20     
2025                                                                                                               .    Aalborg .    Biogas_Upgrading_25     
2030                                                                                                               .    Aalborg .    Biogas_Upgrading_30     
2035                                                                                                               .    Aalborg .    Biogas_Upgrading_35     
2040                                                                                                               .    Aalborg .    Biogas_Upgrading_40     
2045                                                                                                               .    Aalborg .    Biogas_Upgrading_45     
2050                                                                                                               .    Aalborg .    Biogas_Upgrading_50     
                                                                                                                                                             
$label NO_BIOGAS                                                                                                                                             
                                                                                                                                                             
***TG                                                                                                                                                        
2020                                                                                                               .    Aalborg .    TG_20                   
2025                                                                                                               .    Aalborg .    TG_25                   
2030                                                                                                               .    Aalborg .    TG_30                   
2035                                                                                                               .    Aalborg .    TG_35                   
2040                                                                                                               .    Aalborg .    TG_40                   
2045                                                                                                               .    Aalborg .    TG_45                   
2050                                                                                                               .    Aalborg .    TG_50                   
***Methanol                                                                                                                                                  
2020                                                                                                               .    Aalborg .    Methanol_synthesis_TG_20
2025                                                                                                               .    Aalborg .    Methanol_synthesis_TG_25
2030                                                                                                               .    Aalborg .    Methanol_synthesis_TG_30
2035                                                                                                               .    Aalborg .    Methanol_synthesis_TG_35
2040                                                                                                               .    Aalborg .    Methanol_synthesis_TG_40
2045                                                                                                               .    Aalborg .    Methanol_synthesis_TG_45
2050                                                                                                               .    Aalborg .    Methanol_synthesis_TG_50
*                                                                                                                                                            
2020                                                                                                               .    Aalborg .    EMethanol_synthesis_20  
2025                                                                                                               .    Aalborg .    EMethanol_synthesis_25  
2030                                                                                                               .    Aalborg .    EMethanol_synthesis_30  
2035                                                                                                               .    Aalborg .    EMethanol_synthesis_35  
2040                                                                                                               .    Aalborg .    EMethanol_synthesis_40  
2045                                                                                                               .    Aalborg .    EMethanol_synthesis_45  
2050                                                                                                               .    Aalborg .    EMethanol_synthesis_50  
*                                                                                                                                                            
2020                                                                                                               .    Aalborg .    EMethanol_Upgrade_20    
2025                                                                                                               .    Aalborg .    EMethanol_Upgrade_25    
2030                                                                                                               .    Aalborg .    EMethanol_Upgrade_30    
2035                                                                                                               .    Aalborg .    EMethanol_Upgrade_35    
2040                                                                                                               .    Aalborg .    EMethanol_Upgrade_40    
2045                                                                                                               .    Aalborg .    EMethanol_Upgrade_45    
2050                                                                                                               .    Aalborg .    EMethanol_Upgrade_50    
***Ammonia                                                                                                                                                   
2020                                                                                                               .    Aalborg .    Ammonia_Synthesis_20    
2025                                                                                                               .    Aalborg .    Ammonia_Synthesis_25    
2030                                                                                                               .    Aalborg .    Ammonia_Synthesis_30    
2035                                                                                                               .    Aalborg .    Ammonia_Synthesis_35    
2040                                                                                                               .    Aalborg .    Ammonia_Synthesis_40    
2045                                                                                                               .    Aalborg .    Ammonia_Synthesis_45    
2050                                                                                                               .    Aalborg .    Ammonia_Synthesis_50    
***Jet and oil products                                                                                                                                      
2020                                                                                                               .    Aalborg .    BioJet_20               
2025                                                                                                               .    Aalborg .    BioJet_25               
2030                                                                                                               .    Aalborg .    BioJet_30               
2035                                                                                                               .    Aalborg .    BioJet_35               
2040                                                                                                               .    Aalborg .    BioJet_40               
2045                                                                                                               .    Aalborg .    BioJet_45               
2050                                                                                                               .    Aalborg .    BioJet_50               
*                                                                                                                                                            
2020                                                                                                               .    Aalborg .    BioJet_H2_20            
2025                                                                                                               .    Aalborg .    BioJet_H2_25            
2030                                                                                                               .    Aalborg .    BioJet_H2_30            
2035                                                                                                               .    Aalborg .    BioJet_H2_35            
2040                                                                                                               .    Aalborg .    BioJet_H2_40            
2045                                                                                                               .    Aalborg .    BioJet_H2_45            
2050                                                                                                               .    Aalborg .    BioJet_H2_50            
*                                                                                                                                                            
2020                                                                                                               .    Aalborg .    E_FT_20                 
2025                                                                                                               .    Aalborg .    E_FT_25                 
2030                                                                                                               .    Aalborg .    E_FT_30                 
2035                                                                                                               .    Aalborg .    E_FT_35                 
2040                                                                                                               .    Aalborg .    E_FT_40                 
2045                                                                                                               .    Aalborg .    E_FT_45                 
2050                                                                                                               .    Aalborg .    E_FT_50                 
/                                                                                                                                                            
;                                                                                                                                                            
*APROCKAPNEW(Y,AAA,PROC)$AAAOPTIFLOW(AAA)=APROCKAPNEW(Y,'Aalborg',PROC);                                                                                     
