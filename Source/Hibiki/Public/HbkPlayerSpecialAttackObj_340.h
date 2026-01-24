#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAttackType.h"
#include "HbkPlayerSpecialAttackObjectBase.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerSpecialAttackObj_340.generated.h"

class UHbkSpAttackMashButtonWidget;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerSpecialAttackObj_340 : public AHbkPlayerSpecialAttackObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSpAttackMashButtonWidget> MashButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpAttackMashButtonWidget* MashButtonWidget;
    
public:
    AHbkPlayerSpecialAttackObj_340(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMashInput(int32 MashCount, EHbkPlayerAttackType Variation);
    
};

