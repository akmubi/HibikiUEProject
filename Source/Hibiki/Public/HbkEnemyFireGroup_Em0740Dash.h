#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyFireGroupBase.h"
#include "HbkEnemyFireGroup_Em0740Dash.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyFireGroup_Em0740Dash : public AHbkEnemyFireGroupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_Launch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_Delete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE_Stop;
    
public:
    AHbkEnemyFireGroup_Em0740Dash(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveFireActivated();
    
};

