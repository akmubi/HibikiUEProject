#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HbkVS_StreamingViewerMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkVS_StreamingViewerMovement : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UHbkVS_StreamingViewerMovement(const FObjectInitializer& ObjectInitializer);

};

