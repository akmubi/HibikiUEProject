#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_BeforeStartBattle.generated.h"

class UHbkGameplayTask_BeforeStartBattle;
class UHbkPreBattleWidget;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_BeforeStartBattle : public UGameplayTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkPreBattleWidget* PreBattleWidget;
    
public:
    UHbkGameplayTask_BeforeStartBattle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPrepareBattle();
    
    UFUNCTION(BlueprintCallable)
    void NoteSyncQuarter(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_BeforeStartBattle* BeforeStartBattle(UObject* WorldContextObject);
    
};

