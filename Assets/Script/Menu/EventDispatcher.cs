using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EventDispatcher : Singleton<EventDispatcher>
{
    public UnityAction roleChanged;

    public UnityAction<UserInfoData> userInfoDataReceived;

    public UnityAction<UserScoreUpdateData> userScoreReceived;

    public UnityAction<UpdateMintStateData> updateMintReceived;

    public UnityAction<UpdateAirdropSolData> updateAirdopReceived;


    public UnityAction<RankListResponse> OnRankListResponse;
    
    public UnityAction<UpdateUserNameResponse> OnUpdateUserName;
    
    public UnityAction<PropResponse> OnPropResponse;
    
    public UnityAction<PropResponse> OnUpdatePropResponse;
    

}
