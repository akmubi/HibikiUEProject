#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ThrowDelegateDelegate.h"
#include "ThrowOrbitProperty.h"
#include "HbkEnemyThrowComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyThrowComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowDelegate OnThrowEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThrowOrbitProperty> OrbitProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThrowNoteNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
public:
    UHbkEnemyThrowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartThrow(AActor* Spawner, FVector Start, FVector To);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowing() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCalcedLocation();
    
    UFUNCTION(BlueprintCallable)
    void EndThrow();
    
};

