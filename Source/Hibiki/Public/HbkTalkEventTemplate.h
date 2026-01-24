#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkTalkEventCamContext.h"
#include "HbkTalkEventCharaContext.h"
#include "HbkTalkScrTransitOption.h"
#include "HbkTalkEventTemplate.generated.h"

class UAkAudioEvent;
class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTalkEventTemplate : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkScriptData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartTalkScriptLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartTalkScriptLineOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkTalkEventCamContext> CameraKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkTalkEventCharaContext> CharaKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkScrTransitOption BeginTransitOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkScrTransitOption EndTransitOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManualEventClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEventOnBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEventOnEnd;
    
    UHbkTalkEventTemplate();

};

