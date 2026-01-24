#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "HbkDamageTask.generated.h"

class AActor;
class AController;
class UDamageType;
class UHbkDamageComponent;

UCLASS(Abstract, Blueprintable)
class HIBIKI_API UHbkDamageTask : public UObject {
    GENERATED_BODY()
public:
    UHbkDamageTask();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkDamageComponent* GetDamageComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintNative_Execute(AActor* MyActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo);
    
};

