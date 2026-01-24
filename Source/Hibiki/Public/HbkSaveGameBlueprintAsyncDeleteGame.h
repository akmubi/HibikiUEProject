#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkOnAsyncDeleteGameCompleteDelegate.h"
#include "HbkSaveGameBlueprintAsyncDeleteGame.generated.h"

class UHbkSaveGameBlueprintAsyncDeleteGame;
class UObject;

UCLASS(Blueprintable)
class UHbkSaveGameBlueprintAsyncDeleteGame : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkOnAsyncDeleteGameComplete OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UHbkSaveGameBlueprintAsyncDeleteGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncDeleteGame* RequestDeleteGame(UObject* NewWorldContextObject, const FString& SlotName);
    
};

