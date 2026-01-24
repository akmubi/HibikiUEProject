#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkSoundMarkerActor.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API AHbkSoundMarkerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> SoundMarkerActionDT;
    
public:
    AHbkSoundMarkerActor(const FObjectInitializer& ObjectInitializer);

};

