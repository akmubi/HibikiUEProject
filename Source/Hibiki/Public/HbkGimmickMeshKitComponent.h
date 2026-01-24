#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkGimmickMeshKitParamType.h"
#include "HbkGimmickMeshKitFlagas.h"
#include "HbkGimmickMeshKitParam.h"
#include "HbkGimmickMeshKitComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickMeshKitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickMeshKitFlagas Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickMeshKitParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmickMeshKitParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ParamExtIntValue;
    
    UHbkGimmickMeshKitComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate(AActor* Activator);
    
};

