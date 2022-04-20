require 'os'
require 'colorize'
require 'colorized_string'
require 'progress_bar'


def checkos()
oscheckbar = ProgressBar.new

puts 'Checking OS'

oscheckbar.increment!

if OS.windows? then
  oscheckbar.increment! 99
puts 'windows'

else
  oscheckbar.increment! 99
puts (ColorizedString["[Error] "].colorize(:red) + "Windows Is the Os ShellX Is made in, So it mite not work for Your Os!")


end
end



def textloadingEffect(texttodotextloadingEffect, timetowait)

print (texttodotextloadingEffect + ".")
sleep timetowait
print ("..")
sleep timetowait
print ("...")
print ("\n")

end

def typewriter(texttotypewrite, timetosleep)

texttotypewrite.split("").each do |i|
    sleep timetosleep
  print i
end
print ("\n")
end

def checkifcmd(cmdtocheck)
 begin
cmdchecker = system(cmdtocheck)
if cmdchecker then
retern true
end

rescue
retern false

end
end


def getfilesWithPM_TEMPDIRCHECKER()

#Dir.exists?("folder")

getfilesWithPM_TEMPDIRCHECKERcheckbar = ProgressBar.new

textloadingEffect('Checking if Temp Dir Exists', 1.75)
getfilesWithPM_TEMPDIRCHECKERcheckbar.increment! 2
sleep 1.75
getfilesWithPM_TEMPDIRCHECKERcheckbar.increment! 4

if Dir.exists?("Temp") then
getfilesWithPM_TEMPDIRCHECKERcheckbar.increment! 94
puts (ColorizedString["Temp Dir Exists!"].colorize(:green))
else
getfilesWithPM_TEMPDIRCHECKERcheckbar.increment! 93
puts (ColorizedString["Temp Dir Does Not Exists!"].colorize(:red))
getfilesWithPM_TEMPDIRCHECKERcheckbar.increment! 7
puts (ColorizedString["Makeing Temp Dir"].colorize(:green))
Dir.mkdir 'Temp'

end
end


def getfilesWithPM() # Download Files With PM
checkos()



getfilesWithPM_TEMPDIRCHECKER()



#userinpgut = gets.chomp()





end


def getfilesWithoutPM() # Download Files Without PM
checkos()




end


def main()

puts 'Welcome to the ShellX Setup'
puts '---------------------------'

puts "[1] Base Setup (No PM)"
puts "[2] Base and PM Setup (Recamended)"
puts "[3] Exit"
puts "Enter 1,2 or 3"

        userinput = gets.chomp()

         if userinput == "1" then
         getfilesWithoutPM()

         elsif userinput == "2" then
         getfilesWithPM()

         elsif userinput == "3" then
         exit 1

         else
         puts ("[Error]" + userinput + " Not Found!")


          end
       end
   




main()