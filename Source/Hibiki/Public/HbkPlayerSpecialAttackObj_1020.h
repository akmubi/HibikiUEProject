#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "HbkPlayerSpecialAttackObj_1020.generated.h"

class UAnimSequenceBase;
class UHbkSimpleSpringArmComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerSpecialAttackObj_1020 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSimpleSpringArmComponent* SpringArmComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmLength;
    
    AHbkPlayerSpecialAttackObj_1020(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbortSPA();
    
};

