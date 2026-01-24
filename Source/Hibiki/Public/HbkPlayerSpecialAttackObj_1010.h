#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "HbkPlayerSpecialAttackObj_1010.generated.h"

class UAnimSequenceBase;
class UHbkImproveAttackComponent;
class UHbkRepulsionComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerSpecialAttackObj_1010 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkImproveAttackComponent* AttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRepulsionComponent* RepulsionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JumpCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotateCurveName;
    
    AHbkPlayerSpecialAttackObj_1010(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbortSPA();
    
};

