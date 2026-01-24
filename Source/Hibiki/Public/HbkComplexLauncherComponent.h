#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ComplexLaunchDelegateDelegate.h"
#include "HbkComplexLaunchParam.h"
#include "HbkComplexLauncherComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkComplexLauncherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComplexLaunchDelegate OnLaunch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkComplexLaunchParam> LaunchParamMap;
    
public:
    UHbkComplexLauncherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SingleLaunchToAngle(FName SlotName, AActor* Target, const FVector& SpawnPos, const FRotator& SpawnRot, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SingleLaunch(FName SlotName, AActor* Target, const FVector& SpawnPos, int32 Index);
    
};

