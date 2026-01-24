#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkCharacterMotionBlurSetting.h"
#include "HbkCharacterMotionBlurComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCharacterMotionBlurComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkCharacterMotionBlurSetting> Settings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
public:
    UHbkCharacterMotionBlurComponent(const FObjectInitializer& ObjectInitializer);

};

