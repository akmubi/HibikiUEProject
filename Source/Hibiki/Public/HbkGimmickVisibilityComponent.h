#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkGimmickVisibilityParamType.h"
#include "HbkGimmickComponentConstructionInterface.h"
#include "HbkGimmickVisibilityFlagas.h"
#include "HbkGimmickVisibilityParam.h"
#include "HbkGimmickVisibilityComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickVisibilityComponent : public UActorComponent, public IHbkGimmickComponentConstructionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickVisibilityFlagas Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickVisibilityParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmickVisibilityParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ParamExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FName> CollisionProfileNameMap;
    
    UHbkGimmickVisibilityComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate(AActor* Activator);
    

    // Fix for true pure virtual functions not being implemented
};

