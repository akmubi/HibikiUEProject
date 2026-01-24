#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkGimmickSignHologramArrowType.h"
#include "HbkGimmickSignHologramComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkGimmickSignHologramComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickSignHologramArrowType ArrowDefaultType;
    
    UHbkGimmickSignHologramComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSignHiddenInGame(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void On8thNoteAnimationEvent_SecDFlyingBase(int32 NoteCount, bool bDownBeat);
    
};

