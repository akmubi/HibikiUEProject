#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkRestartActivateEvent.h"
#include "HbkRestartBranchAudioEvent.h"
#include "HbkRestartBranchTalkSessionEvent.h"
#include "HbkRestartPostProcessEvent.h"
#include "HbkRestartDataRow.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRestartDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartBranchAudioEvent RegistMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartBranchAudioEvent BGMState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartBranchAudioEvent ProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRestartBranchAudioEvent> SoundStateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartBranchTalkSessionEvent TalkSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartPostProcessEvent PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartActivateEvent Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFadeInTime;
    
    FHbkRestartDataRow();
};

