#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0290.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0290 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_bg0290_EventStart);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg0290_EventStart OnEventStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool playerDizzy;
    
public:
    AHbkGimmick_bg0290(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInterpMoveEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatSyncActivate(int32 NoteCount, bool bDownBeat);
    
};

