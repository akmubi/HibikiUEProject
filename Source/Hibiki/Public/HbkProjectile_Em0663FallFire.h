#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkProjectile_Em0660BombBase.h"
#include "Templates/SubclassOf.h"
#include "HbkProjectile_Em0663FallFire.generated.h"

class AHbkEnemyFireBase;

UCLASS(Blueprintable)
class AHbkProjectile_Em0663FallFire : public AHbkProjectile_Em0660BombBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FireScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyFireBase> FireClass;
    
public:
    AHbkProjectile_Em0663FallFire(const FObjectInitializer& ObjectInitializer);

};

