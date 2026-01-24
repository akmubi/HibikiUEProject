#pragma once
#include "CoreMinimal.h"
#include "Em0600MoveParam.h"
#include "HbkFlyingEnemyCharacter.h"
#include "HbkEm0600_Airbot.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0600_Airbot : public AHbkFlyingEnemyCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm0600MoveParam MoveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> AirbotMoveCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* pAirbotMoveCurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
public:
    AHbkEm0600_Airbot(const FObjectInitializer& ObjectInitializer);

};

