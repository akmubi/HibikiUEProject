#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireSingle.h"
#include "HbkEnemyFire_Em0660FireBomb.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class AHbkEnemyFire_Em0660FireBomb : public AHbkEnemyFireSingle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkCompMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_OnExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_OnDelete;
    
public:
    AHbkEnemyFire_Em0660FireBomb(const FObjectInitializer& ObjectInitializer);

};

