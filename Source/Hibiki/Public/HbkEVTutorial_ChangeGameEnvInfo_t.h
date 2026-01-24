#pragma once
#include "CoreMinimal.h"
#include "HbkEVTutorial_ChangeGameEnvInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkEVTutorial_ChangeGameEnvInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameEnvRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameEnvExeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameEnvBlendStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameEnvBlendEndTime;
    
    HIBIKI_API FHbkEVTutorial_ChangeGameEnvInfo_t();
};

