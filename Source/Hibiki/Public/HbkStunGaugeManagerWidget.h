#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkStunGaugeManagerWidget.generated.h"

class AHbkEnemyCharacter;
class UAnimSequenceBase;
class UHbkStunGaugeWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStunGaugeManagerWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStunGaugeWidget> StunGaugeWidgetClass;
    
public:
    UHbkStunGaugeManagerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAttackNotice();
    
};

