#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkDynamicDialogueSound.generated.h"

class UAkDynamicDialogueComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkDynamicDialogueSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkDynamicDialogueComponent* AkDynamicDialogueComponent;
    
    AAkDynamicDialogueSound(const FObjectInitializer& ObjectInitializer);

};

