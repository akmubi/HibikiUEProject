#pragma once
#include "CoreMinimal.h"
#include "HbkEm0650WingProjectileData.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm0650WingProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> List_DirAngle_H;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> List_AdditiveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArriveNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnabledAttackNoteCount;
    
    HIBIKI_API FHbkEm0650WingProjectileData();
};

