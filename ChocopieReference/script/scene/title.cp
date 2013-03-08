﻿# encoding:utf-8

import 'gameobject/*'

class Scene < SceneBase
	include EventHandler

    def initialize
        super

		@fontTitle = Font.new("gulim.ttc", 40)
		@fontVersion = Font.new("gulim.ttc", 20)
    end

    def dispose
        super
    end

    def drawText(x,y,msg,font,sx,sy)
        font.color = Color.DarkGray
        font.draw(x+sx,y+sy,msg)
        font.color = Color.Black
        font.draw(x,y,msg)
    end
    def update
        crt = $graphic.size
        $graphic.color = Color.White
        $graphic.fill(0,0,crt.w,crt.h)

		@fontTitle.style = BOLD
        drawText(200,156,"Chocopie Reference",@fontTitle, 4,3)
        @fontVersion.style = BOLD
        drawText(708,345,"api version",@fontVersion, 2,1)
        @fontVersion.style = NONE
        drawText(758,366,"1.41.0",@fontVersion, 1,1)
    end

	def keyDown(key)
		$scene.change "view"
	end
	def leftDown(x,y)
		$scene.change "view"
	end
end