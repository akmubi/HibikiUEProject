#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "HbkEnemyFireGroupBase.generated.h"

class AHbkEnemyFireBase;

UCLASS(Blueprintable)
class AHbkEnemyFireGroupBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyFireBase> FireClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPointEnableFireNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateDynamicTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyActiveVFXOnDeactive;
    
public:
    AHbkEnemyFireGroupBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnRecieveDisabled(bool DisableByDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginRhythmParryAttack();
    
};

