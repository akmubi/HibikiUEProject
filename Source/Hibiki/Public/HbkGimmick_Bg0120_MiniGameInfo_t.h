#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkGameplayTask_FlickGameEnvPhaseActivateMode.h"
#include "HbkGimmick_Bg0120_MiniGameInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_Bg0120_MiniGameInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameplayTask_FlickGameEnvPhaseActivateMode FlickActivateMode0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FlickActivateTag0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlickActivateCallSign0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlickActivateExtInt0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameplayTask_FlickGameEnvPhaseActivateMode FlickActivateMode1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FlickActivateTag1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlickActivateCallSign1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlickActivateExtInt1;
    
    HIBIKI_API FHbkGimmick_Bg0120_MiniGameInfo_t();
};

