#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "HbkLaunchParam.h"
#include "LauncherCompDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkLauncherComponent.generated.h"

class AActor;
class AHbkProjectile;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkLauncherComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLauncherCompDelegate OnWasLaunch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLauncherCompDelegate OnLauncherEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkLaunchParam> LaunchParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaunchEffect;
    
public:
    UHbkLauncherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SingleLaunchWithParam(FHbkLaunchParam LaunchParam, AActor* Target, const FVector& SpawnPos);
    
    UFUNCTION(BlueprintCallable)
    void SingleLaunch(int32 Index, AActor* Target, const FVector& SpawnPos);
    
    UFUNCTION(BlueprintCallable)
    void RandomLaunch(AActor* Target, const FVector& SpawnPos);
    
    UFUNCTION(BlueprintCallable)
    void PrepareRandomLaunch();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGridEvent(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainLaunchCount() const;
    
};

