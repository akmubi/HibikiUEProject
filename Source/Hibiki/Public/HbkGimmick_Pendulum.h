#pragma once
#include "CoreMinimal.h"
#include "AttackInterface.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_PendulumAction.h"
#include "HbkGimmick_PendulumMesh.h"
#include "HbkGimmick_PendulumSound.h"
#include "HbkGimmick_Pendulum.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_Pendulum : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_PendulumAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_PendulumMesh Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_PendulumSound Sound;
    
public:
    AHbkGimmick_Pendulum(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnRefreshAttack(int32 NoteCount, bool bDownBeat);
    

    // Fix for true pure virtual functions not being implemented
};

