#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "PlayerAsyncActionDelegateDelegate.h"
#include "HbkPlayerInterpPosition.generated.h"

class UHbkPlayerInterpPosition;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerInterpPosition : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAsyncActionDelegate MoveEnded;
    
    UHbkPlayerInterpPosition();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayerInterpPosition* PlayerInterpPosition(UObject* WorldContextObject, const FTransform& Goal, bool OverrideAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveEnded();
    
};

