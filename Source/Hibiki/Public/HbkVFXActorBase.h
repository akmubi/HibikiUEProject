#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "EHbkVFXActorBase_SaveType.h"
#include "HbkVFXActorBase_ActivateDelegateDelegate.h"
#include "HbkVFXActorBase_DeactivateDelegateDelegate.h"
#include "HbkVFXActorBase_SoundInfo_t.h"
#include "HbkVFXActorBase.generated.h"

class UBillboardComponent;
class UHbkGameAgentComponent;
class UHbkGimmickVfxComponent;
class UHbkParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AHbkVFXActorBase : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVFXActorBase_ActivateDelegate OnActivateVFXActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVFXActorBase_DeactivateDelegate OnDeactivateVFXActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGimmickVfxComponent* GimmickVfxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkVFXActorBase_SaveType bSaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkVFXActorBase_SoundInfo_t> GimmickSoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayToBPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickStopWhenDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool significanceDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float significanceDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float noRenderMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minTickInterval;
    
public:
    AHbkVFXActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool DeleateAkComp();
    
    UFUNCTION(BlueprintCallable)
    bool CopyAkComp2SoundInfo();
    

    // Fix for true pure virtual functions not being implemented
};

