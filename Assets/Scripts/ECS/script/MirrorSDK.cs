
    using System.Collections.Generic;
 

    public class MirrorSDKFake
    {   
        
        
        //   // todo Just Simulate the SDK call operation
        public static List<NFTCellData> FetchNfts()
        {
            List<NFTCellData> datas = new List<NFTCellData>();

            for (int i = 0; i < 11; i++)
            {
                NFTCellData nftCellData = new NFTCellData();
                DataParsingEntity dataParsingEntity = new DataParsingEntity();
                nftCellData.DataParsingEntity = dataParsingEntity;
                nftCellData.DataParsingEntity.name = "Mirror Jump #" +( i + 1);
                nftCellData.DataParsingEntity.description =
                    "Mirror Jump is our tribute to Doodle Jump, powered by Mirror World SDK. We hope that this game will help players to better understand the fun aspects of Web3 games and help developers to better understand how to use the Mirror World SDK.";
                nftCellData.DataParsingEntity.attribute = new List<AttributeItem>(2);
                AttributeItem attributeItemRare = new AttributeItem();
                attributeItemRare.trait_type = "Rarity";
                AttributeItem attributeItemName = new AttributeItem();
                attributeItemName.trait_type = "Type";
                nftCellData.DataParsingEntity.attribute.Add(attributeItemRare);
                nftCellData.DataParsingEntity.attribute.Add(attributeItemName);
                datas.Add(nftCellData);
                
            }

            datas[0].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Rare_Pirate Captain.png";
            datas[0].DataParsingEntity.attribute[0].value = "Rare";
            datas[0].DataParsingEntity.attribute[1].value = "Pirate Captain";
            
            datas[1].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Legendary_Astronaut.png";
            datas[1].DataParsingEntity.attribute[0].value = "Legendary";
            datas[1].DataParsingEntity.attribute[1].value = "Astronaut";
            
            datas[2].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Elite_Zombie.png";
            datas[2].DataParsingEntity.attribute[0].value = "Elite";
            datas[2].DataParsingEntity.attribute[1].value = "Zombie";
            
            datas[3].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Legendary_Cat Maid.png";
            datas[3].DataParsingEntity.attribute[0].value = "Legendary";
            datas[3].DataParsingEntity.attribute[1].value = "Cat Maid";
            
            
            datas[4].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Mythical_Samurai.png";
            datas[4].DataParsingEntity.attribute[0].value = "Mythical";
            datas[4].DataParsingEntity.attribute[1].value = "Samurai";
            
            
            datas[5].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Rare_Cat Maid.png";
            datas[5].DataParsingEntity.attribute[0].value = "Rare";
            datas[5].DataParsingEntity.attribute[1].value = "Cat Maid";
            
            
            datas[6].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Legendary_Samurai.png";
            datas[6].DataParsingEntity.attribute[0].value = "Legendary";
            datas[6].DataParsingEntity.attribute[1].value = "Samurai";
            
            
            datas[7].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Mythical_Astronaut.png";
            datas[7].DataParsingEntity.attribute[0].value = "Mythical";
            datas[7].DataParsingEntity.attribute[1].value = "Astronaut";
            
            
            datas[8].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Legendary_Zombie.png";
            datas[8].DataParsingEntity.attribute[0].value = "Legendary";
            datas[8].DataParsingEntity.attribute[1].value = "Zombie";
            
            
            datas[9].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Mythical_Zombie.png";
            datas[9].DataParsingEntity.attribute[0].value = "Mythical";
            datas[9].DataParsingEntity.attribute[1].value = "Zombie";
            
            
            datas[10].DataParsingEntity.image = "http://metadata-assets.mirrorworld.fun/mirror_jump/images/Elite_Astronaut.png";
            datas[10].DataParsingEntity.attribute[0].value = "Elite";
            datas[10].DataParsingEntity.attribute[1].value = "Astronaut";
            

            return datas;

        }
        
        
        public static bool MintNFT(NFTCellData nftCellData)
        {
            return true;
        }

        public static bool ListNFT(NFTCellData nftCellData)
        {
            return true;
        }


        public static bool TransferNFT(NFTCellData nftCellData)
        {
            return true;
        }
        
        
        
        
    }
