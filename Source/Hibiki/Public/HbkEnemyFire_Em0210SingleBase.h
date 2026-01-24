#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireSingle.h"
#include "HbkEnemyFire_Em0210SingleBase.generated.h"

class AHbkEnemyCharacter;

UCLASS(Blueprintable)
class AHbkEnemyFire_Em0210SingleBase : public AHbkEnemyFireSingle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEnemyCharacter> OwnerEnemy;
    
public:
    AHbkEnemyFire_Em0210SingleBase(const FObjectInitializer& ObjectInitializer);

};

