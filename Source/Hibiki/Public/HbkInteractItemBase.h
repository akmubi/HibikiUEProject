#pragma once
#include "CoreMinimal.h"
#include "HbkItemBase.h"
#include "HbkInteractItemBase.generated.h"

class AActor;
class UHbkInteractTargetComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AHbkInteractItemBase : public AHbkItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkInteractTargetComponent* InteractTargetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitActiveInteract;
    
public:
    AHbkInteractItemBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActiveInteract(const bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
};

