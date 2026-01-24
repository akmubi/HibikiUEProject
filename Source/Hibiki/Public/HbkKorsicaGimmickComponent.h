#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkKorsicaGimmickProgress.h"
#include "EHbkKorsicaRhythmPattarnNum.h"
#include "KorsicaMiniGameResultDelegateDelegate.h"
#include "KorsicaMinigameInputResultDelegateDelegate.h"
#include "HbkKorsicaGimmickComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkKorsicaGimmickComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkKorsicaRhythmPattarnNum PattarnNum;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaMinigameInputResultDelegate OnInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKorsicaMiniGameResultDelegate OnMinigameProgress;
    
    UHbkKorsicaGimmickComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable)
    EHbkKorsicaGimmickProgress GetGimmickProgress();
    
    UFUNCTION(BlueprintCallable)
    bool BeginMinigame(EHbkKorsicaRhythmPattarnNum Pattarn);
    
};

