#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkNoticePopupType.h"
#include "HbkNoticePopupChannelInfo.h"
#include "HbkPlayingTalkEventSceneInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkNoticePopupControl.generated.h"

class UTngUserWidget;

UCLASS(Blueprintable)
class UHbkNoticePopupControl : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkNoticePopupType, TSubclassOf<UTngUserWidget>> NoticePopupWidgetClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkNoticePopupChannelInfo> ChannelInfos;
    
public:
    UHbkNoticePopupControl();

private:
    UFUNCTION(BlueprintCallable)
    void OnStartTKEV(const FHbkPlayingTalkEventSceneInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTKEV(const FHbkPlayingTalkEventSceneInfo& Info);
    
};

