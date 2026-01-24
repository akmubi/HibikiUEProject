#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkEnemyHealthBarManagerWidget.generated.h"

class AHbkEnemyCharacter;
class UAnimSequenceBase;
class UHbkEnemyHealthBarWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEnemyHealthBarManagerWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkEnemyHealthBarWidget> HealthBarWidgetClass;
    
public:
    UHbkEnemyHealthBarManagerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndAttackNotice(AHbkEnemyCharacter* Attacker, bool IsParrySuccessful, UAnimSequenceBase* PlayerAction);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAttackNotice();
    
};

