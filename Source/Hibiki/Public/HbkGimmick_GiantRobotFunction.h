#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_GiantRobotFunction.generated.h"

class AHbkGimmick_GiantRobotBeam;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UHbkGimmick_GiantRobotFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkGimmick_GiantRobotFunction();

    UFUNCTION(BlueprintCallable)
    static AHbkGimmick_GiantRobotBeam* SpawnGiantRobotBeam(USkeletalMeshComponent* MeshComp, TSubclassOf<AHbkGimmick_GiantRobotBeam> BeamClass, FName CanonBoneName, bool bAttach);
    
};

