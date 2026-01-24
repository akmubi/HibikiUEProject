#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "HbkLocalPlayer.generated.h"

class UHbkPlayerProfile;
class UTexture2DDynamic;

UCLASS(Blueprintable, NonTransient)
class UHbkLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerProfile* PlayerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* GamerIconTexture;
    
public:
    UHbkLocalPlayer();

private:
    UFUNCTION(BlueprintCallable)
    void HandleProfileLoadErrorDialogContinue();
    
};

