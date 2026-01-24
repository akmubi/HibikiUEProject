#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireSingle.h"
#include "HbkEnemyFire_Em7500ArmSingleBase.generated.h"

class AHbkEnemyCharacter;

UCLASS(Blueprintable)
class AHbkEnemyFire_Em7500ArmSingleBase : public AHbkEnemyFireSingle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyCharacter> OwnerEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDeactiveTime;
    
public:
    AHbkEnemyFire_Em7500ArmSingleBase(const FObjectInitializer& ObjectInitializer);

};

