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
}
