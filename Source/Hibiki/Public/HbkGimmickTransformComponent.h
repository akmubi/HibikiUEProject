#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkGimmickTransformParamType.h"
#include "HbkGimmickTransformFlagas.h"
#include "HbkGimmickTransformParam.h"
#include "HbkGimmickTransformComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickTransformComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickTransformFlagas Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickTransformParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmickTransformParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ParamExtIntValue;
    
    UHbkGimmickTransformComponent(const FObjectInitializer& ObjectInitializer);

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

