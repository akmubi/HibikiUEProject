#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireBase.h"
#include "HbkEnemyFireEffectData.h"
#include "HbkEnemyFire_Em0740Dash.generated.h"

UCLASS(Blueprintable)
class AHbkEnemyFire_Em0740Dash : public AHbkEnemyFireBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyFireEffectData VFX_Trail;
    
public:
    AHbkEnemyFire_Em0740Dash(const FObjectInitializer& ObjectInitializer);

};

