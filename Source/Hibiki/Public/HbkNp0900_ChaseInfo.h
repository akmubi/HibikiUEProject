#pragma once
#include "CoreMinimal.h"
#include "HbkNp0900_ChaseInfo.generated.h"

class AActor;
class AHbkTriggerVolume;

USTRUCT(BlueprintType)
struct FHbkNp0900_ChaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ChasePointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkTriggerVolume* ChaseTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChasingSpeed;
    
    HIBIKI_API FHbkNp0900_ChaseInfo();
};

