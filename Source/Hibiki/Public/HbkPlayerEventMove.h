#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "PlayerAsyncActionDelegateDelegate.h"
#include "HbkPlayerEventMove.generated.h"

class UHbkPlayerEventMove;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerEventMove : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAsyncActionDelegate MoveEnded;
    
    UHbkPlayerEventMove();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayerEventMove* PlayerEventMove(UObject* WorldContextObject, const FTransform& Goal, float moveSpeed, float InterpTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEventMoveEnd();
    
};

